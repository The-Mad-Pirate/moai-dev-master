// Copyright (c) 2010-2011 Zipline Games, Inc. All Rights Reserved.
// http://getmoai.com

#include <moai-core/MOAILua.h>
#include <LinearMath/btVector3.h>

#ifndef MOAIBTVECTOR3_H
#define MOAIBTVECTOR3_H

//#pragma once

//================================================================//
// MOAIBtVector3
//================================================================//
/**	@name	MOAIBtVector3
	@text	Basic Bullet Physics 3 Component Vector Implementation
*/
class MOAIBtVector3 :
	public virtual MOAILuaObject {
private:

	btVector3*		mBtVector3;
//	ZLLeanLink < MOAIBtVector3* > mLinkBtVector3;
	
	//----------------------------------------------------------------//
	static int		_length								( lua_State* L );
	static int		_length2							( lua_State* L );
	static int		_norm								( lua_State* L );
	static int		_setValue							( lua_State* L );
	static int		_getX								( lua_State* L );
	static int		_getY								( lua_State* L );
	static int		_getZ								( lua_State* L );
	static int		_setX								( lua_State* L );
	static int		_setY								( lua_State* L );
	static int		_setZ								( lua_State* L );
	static int		_normalize							( lua_State* L );	
	static int		_normalized							( lua_State* L );
	static int		_toArray							( lua_State* L );
	static int		_distance							( lua_State* L );
	static int		_distance2							( lua_State* L );
	static int		_dot								( lua_State* L );
	static int		_cross								( lua_State* L );
	static int		_safeNormalize						( lua_State* L );
	static int		_rotate								( lua_State* L );
	static int		_angle								( lua_State* L );
	static int		_triple								( lua_State* L );	
	static int		_minAxis							( lua_State* L );
	static int		_furthestAxis						( lua_State* L );
	static int		_closestAxis						( lua_State* L );
	static int		_setInterpolate3					( lua_State* L );
	static int		_lerp								( lua_State* L );
	static int		_setMax								( lua_State* L );
	static int		_setMin								( lua_State* L );
	static int		_getSkewSymmetricMatrix				( lua_State* L );
	static int		_setZero							( lua_State* L );
	static int		_isZero								( lua_State* L );
	static int		_fuzzyZero							( lua_State* L );
	static int		_maxDot 							( lua_State* L );
	static int		_minDot 							( lua_State* L );
	static int		_dot3								( lua_State* L );


public:
	
	DECL_LUA_FACTORY ( MOAIBtVector3 )
//	DECL_ATTR_HELPER ( MOAIBtVector3 )
	
//	GET ( MOAIBtVector3*, _mBtVector3, mBtVector3 )

	//----------------------------------------------------------------//
	void			Destroy						();
					MOAIBtVector3				();
					~MOAIBtVector3				();
	void			RegisterLuaClass		( MOAILuaState& state );
	void			RegisterLuaFuncs		( MOAILuaState& state );
};

#endif