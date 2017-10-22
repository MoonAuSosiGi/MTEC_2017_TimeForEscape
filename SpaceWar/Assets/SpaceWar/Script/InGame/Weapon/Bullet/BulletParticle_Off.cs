﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletParticle_Off : MonoBehaviour {

    #region Bullet Particle Off INFO
    private ParticleSystem m_targetParticleSystem = null;
    #endregion

    #region Unity Method
    void Start()
    {
        m_targetParticleSystem = this.GetComponent<ParticleSystem>();
    } 
    #endregion

    public void BulletHitEvent()
    {
        gameObject.SetActive(false);
    }

    public void Reset()
    {
        gameObject.SetActive(true);
    }
}