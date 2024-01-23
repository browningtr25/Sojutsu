using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class o : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {

    }
    public void GoToMove()
    {
        SceneManager.LoadScene(1);
    }
    public void GoToGame()
    {
        SceneManager.LoadScene(0);
    }
}