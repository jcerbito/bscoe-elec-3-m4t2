using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HealthSystem : MonoBehaviour {

	public static int health;
	Text text;

	void Start(){
 		text = GetComponent<Text>();
		health = 3;
	}

	void Update(){
		text.text = "Health: " + health;
	}
 
}
