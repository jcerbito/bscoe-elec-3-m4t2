using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class PlayerCollision : MonoBehaviour {

    [SerializeField] ParticleSystem effect;
	[SerializeField] float delayTime = 1f;

	void Start(){
		effect.Stop();
	}

	void Explode(){
		effect.Play();
	}

	void OnCollisionEnter(Collision other){
		Explode();
		//Invoke("Restart", delayTime);
	}

	void Restart(){
		SceneManager.LoadScene(1);
	}
}
