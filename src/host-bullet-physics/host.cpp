// Copyright (c) 2010-2011 Zipline Games, Inc. All Rights Reserved.
// http://getmoai.com

#include "pch.h"
#include <host-bullet-physics/host.h>
#include <host-bullet-physics/headers.h>

//================================================================//
// AKUBulletPhysics
//================================================================//

//----------------------------------------------------------------//
void AKUBulletPhysicsAppFinalize () {
}

//----------------------------------------------------------------//
void AKUBulletPhysicsAppInitialize () {
}

//----------------------------------------------------------------//
void AKUBulletPhysicsContextInitialize () {

//	REGISTER_LUA_CLASS ( MOAIFooMgr2 )
	REGISTER_LUA_CLASS ( MOAIBtVector3 )	

}
