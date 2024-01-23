using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class PlayerControls : MonoBehaviour
{
    public float jumpPower = 6f;
    public bool isGrounded = false;
    float posX = 0.0f;
    public Text final;
    Rigidbody2D rb;
    public KeyCode triggerKey = KeyCode.Space; // Specify the desired key
    public KeyCode throwKey;
    private Animator targetAnimator;
    public Text swordText;
    public int slashes = 0;
    public bool dead = false;
    public GameObject Shield;
    public Text throwtext;
    public int throws = 0;
    public int kills = 0;
    public GameObject throwingSword;
    public GameObject thrownSword = null;
    public GameObject HUD;
    public Text score;
    public int high_score = 0;
    public Text high;
    public GameObject bye;
    // Start is called before the first frame update
    void Start()
    {
        rb = transform.GetComponent<Rigidbody2D>();
        posX = transform.position.x;
        targetAnimator = gameObject.GetComponent<Animator>();
        high_score= PlayerPrefs.GetInt("Highscore", high_score);
        high.text = high_score.ToString();
    }

    public void AddKill()
    {
        score.text = (++kills).ToString();
        if (kills > high_score)
        {
            high_score = kills;
            high.text = high_score.ToString();
        }
        final.text = (++kills).ToString();
    }

    // Update is called once per frame
    void FixedUpdate()
    {

        if (Input.GetKey(KeyCode.Space) && isGrounded)
        {   
            rb.AddForce(Vector3.up * (jumpPower), ForceMode2D.Impulse);
            isGrounded = false;
        }
        if (Input.GetKey(throwKey) && !isThrowing() && throws > 0 && !dead)
        {
            targetAnimator.Play("Throw");
            thrownSword = Instantiate(throwingSword, transform.position + new Vector3(0.6f, 0, 0), transform.rotation);
            thrownSword.SetActive(true);
            throwtext.text = (--throws).ToString();
        }
        if (Input.GetKey(triggerKey) && !dead && !isSlashing() && slashes > 0)
        {
            // Trigger the animation on the target object
            //transform.localScale = new Vector2(1.8f, 1.8f);
            if (isGrounded == false)
            {
                targetAnimator.Play("slash");
            }
            else
            {
                targetAnimator.Play("running slash");
                //transform.position += new Vector3(0f, 0f, 0f);
            }
            swordText.text = (--slashes).ToString();
        }
    }

    bool isSlashing()
    {
        return targetAnimator.GetCurrentAnimatorStateInfo(0).IsName("slash") || targetAnimator.GetCurrentAnimatorStateInfo(0).IsName("running slash");
    }

    bool isThrowing()
    {
        return this.thrownSword != null;
    }
    void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.collider.tag == "Ground" && rb.velocity.y == 0)
        {
            isGrounded = true;
        }
        if (collision.collider.tag == "Enemy")
        {
            if (isSlashing())
            {
                Destroy(collision.gameObject);
                AddKill();
                return;
            }
            dead = true;
            PlayerPrefs.SetInt("Highscore", high_score);
            PlayerPrefs.Save();
            //GetComponent<Animation>()["death"].wrapMode = WrapMode.Once;
            Destroy(this.gameObject, 0.5f);
            targetAnimator.Play("death");
            HUD.SetActive(false);
            bye.SetActive(true);
            final.gameObject.SetActive(true);
            final.text = score.text;


            //GameObject.Find("GameController").GetComponent<GameController>().GameOver();
        }
    }
    void OnCollisionExit2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Ground"))
        {            
            isGrounded = false;
        }
    }
    void OnTriggerEnter2D(Collider2D collider)
    {
        switch (collider.gameObject.tag) {
            case "Sword":
                swordText.text = (++slashes).ToString();
                Destroy(collider.gameObject);
                break;
            case "Shield":
                Shield.SetActive(true);
                Destroy(collider.gameObject);
                break;
            case "Throw":
                throwtext.text = (++throws).ToString();
                Destroy(collider.gameObject);
                break;
            case "Triple":
                slashes += 3;
                swordText.text = slashes.ToString();
                Destroy(collider.gameObject);
                break;
        }
    }
}