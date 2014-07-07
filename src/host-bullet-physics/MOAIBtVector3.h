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
	static int		_length			( lua_State* L );
	static int		_length2		( lua_State* L );
	static int		_norm			( lua_State* L );
	static int		_setValue		( lua_State* L );
	static int		_getX			( lua_State* L );
	static int		_getY			( lua_State* L );
	static int		_getZ			( lua_State* L );
	static int		_setX			( lua_State* L );
	static int		_setY			( lua_State* L );
	static int		_setZ			( lua_State* L );
	static int		_normalize		( lua_State* L );	
	static int		_normalized		( lua_State* L );
	static int		_toArray		( lua_State* L );
//	static int		_instanceHello			( lua_State* L );

public:
	
	DECL_LUA_FACTORY ( MOAIBtVector3 )

	//----------------------------------------------------------------//
	void			Destroy						();
					MOAIBtVector3				();
					~MOAIBtVector3				();
	void			RegisterLuaClass		( MOAILuaState& state );
	void			RegisterLuaFuncs		( MOAILuaState& state );
};

#endif