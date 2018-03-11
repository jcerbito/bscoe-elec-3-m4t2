using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class EnemyCollision : MonoBehaviour {

    [SerializeField] ParticleSystem effect;
	[SerializeField] GameObject bull;
	[SerializeField] float delayTime = 2f;
	[SerializeField] int scorePoint = 5;
//	[SerializeField] int scoreHit = 3;


	void Explode(){
		effect.Play();
		Destroy(gameObject, delayTime);
	}

	private void forScore(){
        ScoreBoard.score += scorePoint;
		//HealthSystem.health = scoreHit;
		//scoreHit = scoreHit - 1;

		HealthSystem.health = HealthSystem.health - 1;
    }

	void OnTriggerEnter(Collider bull){
	    forScore();
		if (HealthSystem.health <= 1){
			HealthSystem.health = 0;
			Explode();
		
		}
		
	}

	


}
