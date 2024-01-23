using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class sceneChanger : MonoBehaviour
{


    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space))
            {
                SceneManager.LoadScene(0);
            }
    }
    public void Tutorial()
    {
        SceneManager.LoadScene(2);
    }
    public void Title(){
        SceneManager.LoadScene(1);
    }
    public void Credits()
    {
        SceneManager.LoadScene(3);
    }
}