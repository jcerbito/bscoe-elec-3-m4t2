using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class PlayerCollision : MonoBehaviour {

    [SerializeField] ParticleSystem effect;
	[SerializeField] float delayTime = 0.5f;
	public AudioSource exp;

	void Start(){
		exp = GetComponent<AudioSource>();
		effect.Stop();
	}

	void Explode(){
		effect.Play();
		
		
	}

	void OnCollisionEnter(Collision other){
		
		Explode();
		exp.Play();
		Invoke("Restart", delayTime);	
		
	}

	void Restart(){
		SceneManager.LoadScene(1);
	}
}
