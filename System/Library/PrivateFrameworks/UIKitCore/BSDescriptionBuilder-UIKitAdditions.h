//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoard/BSDescriptionBuilder.h>

@interface BSDescriptionBuilder (UIKitAdditions)
- (id)ui_appendReferenceDisplayModeStatus:(long long)arg1 withName:(id)arg2 skipIfNotSupported:(_Bool)arg3;	// IMP=0x0070000000825e36
- (id)ui_appendReferenceDisplayModeStatus:(long long)arg1 withName:(id)arg2;	// IMP=0x0070000000825e21
- (id)ui_appendUserInterfaceIdiom:(long long)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3;	// IMP=0x0070000000825d56
- (id)ui_appendUserInterfaceIdiom:(long long)arg1 withName:(id)arg2;	// IMP=0x0070000000825d41
- (id)ui_appendInterfaceOrientationMask:(unsigned long long)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3;	// IMP=0x0070000000825c77
- (id)ui_appendInterfaceOrientationMask:(unsigned long long)arg1 withName:(id)arg2;	// IMP=0x0070000000825c62
- (id)ui_appendInterfaceOrientation:(long long)arg1 withName:(id)arg2 skipIfUnknown:(_Bool)arg3;	// IMP=0x0070000000825b98
- (id)ui_appendInterfaceOrientation:(long long)arg1 withName:(id)arg2;	// IMP=0x0070000000825b83
- (id)ui_appendTransform:(struct CGAffineTransform)arg1 withName:(id)arg2 skipIfIdentity:(_Bool)arg3;	// IMP=0x0070000000825a03
- (id)ui_appendTransform:(struct CGAffineTransform)arg1 withName:(id)arg2;	// IMP=0x00700000008259ef
- (id)ui_appendRect:(struct CGRect)arg1 withName:(id)arg2 ifNotEqualTo:(struct CGRect)arg3;	// IMP=0x0070000000825965
- (id)ui_appendFloat:(double)arg1 withName:(id)arg2 ifNotEqualTo:(double)arg3;	// IMP=0x0070000000825932
- (id)ui_appendInteger:(long long)arg1 withName:(id)arg2 ifNotEqualTo:(long long)arg3;	// IMP=0x0070000000825902
- (id)ui_appendCornerRadii:(struct UIRectCornerRadii)arg1 withName:(id)arg2;	// IMP=0x007000000082588a
- (id)ui_appendEdgeInsets:(struct UIEdgeInsets)arg1 withName:(id)arg2;	// IMP=0x0070000000825812
- (id)ui_appendFloat:(double)arg1 withName:(id)arg2;	// IMP=0x0070000000825797
- (id)ui_appendSet:(id)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3;	// IMP=0x007000000082570a
- (id)ui_appendArray:(id)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3;	// IMP=0x007000000082567d
- (id)ui_appendObject:(id)arg1 withName:(id)arg2 usingLightweightDescription:(_Bool)arg3;	// IMP=0x00700000008254e9
- (void)ui_appendOrientationDebuggingArraySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3;	// IMP=0x00700000011557fb
- (void)ui_appendOrientationDebugDescription:(id)arg1 withName:(id)arg2 skipIfNil:(_Bool)arg3;	// IMP=0x007000000115567a
- (void)ui_appendOrientationDebugDescription:(id)arg1 withName:(id)arg2;	// IMP=0x0070000001155665
@end

