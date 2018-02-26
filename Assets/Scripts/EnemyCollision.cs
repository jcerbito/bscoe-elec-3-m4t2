using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class EnemyCollision : MonoBehaviour {

    [SerializeField] ParticleSystem effect;
	[SerializeField] GameObject bull;
	[SerializeField] float delayTime = 1f;

	void Explode(){
		effect.Play();
		Destroy(gameObject, delayTime);
	}

	void OnTriggerEnter(Collider bull){
		Explode();
		
	}


}
