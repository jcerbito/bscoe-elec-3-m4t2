using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class EnemyCollision : MonoBehaviour {

    [SerializeField] ParticleSystem effect;
	[SerializeField] GameObject bull;
	[SerializeField] float delayTime = 0.5f;
	[SerializeField] int scorePoint = 5;
	public int hit = 4;
	public Image healthbar;
	public AudioSource expFx;
	
	

	void Start(){
		expFx = GetComponent<AudioSource>();
	}

	void Explode(){
		if (hit == 0){
			effect.Play();
			expFx.Play();
			Destroy(gameObject, delayTime);
			ScoreBoard.score += scorePoint;

		}
	}

	void OnTriggerEnter(Collider bull){
			healthbar.fillAmount = healthbar.fillAmount - 0.25f;
			hit--;
			Explode();
	}




	

	


	
}
