//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CRLGLDataBufferAttribute;

@protocol CRLGLDataBufferAccessor <NSObject>
- (void)setGLPoint4D:(CDStruct_818bb265)arg1 forAttribute:(CRLGLDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (CDStruct_818bb265)GLPoint4DForAttribute:(CRLGLDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2;
- (void)setGLPoint3D:(CDStruct_869f9c67)arg1 forAttribute:(CRLGLDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (CDStruct_869f9c67)GLPoint3DForAttribute:(CRLGLDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2;
- (void)setGLPoint2D:(CDStruct_b2fbf00d)arg1 forAttribute:(CRLGLDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (CDStruct_b2fbf00d)GLPoint2DForAttribute:(CRLGLDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2;
- (void)setCGFloat:(double)arg1 forAttribute:(CRLGLDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLfloat:(float)arg1 forAttribute:(CRLGLDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (float)GLfloatForAttribute:(CRLGLDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2;
@end
