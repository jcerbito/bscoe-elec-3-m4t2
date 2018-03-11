using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HealthSystem2 : MonoBehaviour {

	public static int health;
	Text text;

	private void Start(){
 		text = GetComponent<Text>();
		health = 3;
	}

	private void Update(){
		text.text = "Health: " + health;
	}
}
