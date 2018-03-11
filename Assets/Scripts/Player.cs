using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

public class Player : MonoBehaviour {

    float xThrow;
	float yThrow;
	
	[SerializeField] float speed = 20f;
    [SerializeField] float maxRangeX = 7f;
    [SerializeField] float maxRangeY = 6f;

    [SerializeField] float posPitch = -3f;
    [SerializeField] float conPitch = -15f;
    [SerializeField] float posYaw = 3f;
    [SerializeField] float conRoll = -18f;
	
	void Start () {
		
	}
	
	void Update ()
    {
        xThrow = CrossPlatformInputManager.GetAxis("Horizontal");
        yThrow = CrossPlatformInputManager.GetAxis("Vertical");

		float xThrowPos = xThrow * speed * Time.deltaTime;
		float yThrowPos = yThrow * speed * Time.deltaTime;


        float posXLoc = transform.localPosition.x + xThrowPos;
        float posXClamped = Mathf.Clamp(posXLoc, -maxRangeX, maxRangeX);

        float posYLoc = transform.localPosition.y + yThrowPos;
        float posYClamped = Mathf.Clamp(posYLoc, -maxRangeY, maxRangeY);

        transform.localPosition = new Vector3(posXClamped, posYClamped, transform.localPosition.z);
       
	   PitchRawRoll();
    }

    private void PitchRawRoll()
    {
       
		float pitch = (transform.localPosition.y * posPitch) + (yThrow * conPitch);
        float yaw = transform.localPosition.x * posYaw;
        float roll = xThrow * conRoll;

        transform.localRotation = Quaternion.Euler(pitch, yaw, roll);
    }

}