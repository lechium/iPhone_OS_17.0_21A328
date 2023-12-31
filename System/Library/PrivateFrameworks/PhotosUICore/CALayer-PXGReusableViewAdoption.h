//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class NSString;

@interface CALayer (PXGReusableViewAdoption)
- (_Bool)shouldReloadForUserData:(id)arg1;	// IMP=0x0020000000210659
@property(readonly, nonatomic) _Bool shouldReuseWhenInvisible;
- (void)pxg_shiftPosition:(struct CGPoint)arg1;	// IMP=0x0020000000210607
- (void)pxg_configureWithTexture:(id)arg1 geometry:(CDStruct_4f725fed *)arg2 info:(CDStruct_12471299 *)arg3 style:(CDStruct_a79e78a9 *)arg4 textureInfo:(CDStruct_37a3040a *)arg5 resizableCapInsets:(CDStruct_818bb265)arg6 reusableViewInfo:(id)arg7 screenScale:(double)arg8 separateLayers:(_Bool)arg9;	// IMP=0x002000000020fc21
- (void)pxg_prepareForReuse;	// IMP=0x002000000020fc0d
- (void)pxg_becomeReusable;	// IMP=0x002000000020fb4d
- (void)pxg_removeFromSuperview;	// IMP=0x002000000020fb3b
- (_Bool)pxg_hasSuperview;	// IMP=0x002000000020fb08
- (void)pxg_addToHostingView:(id)arg1;	// IMP=0x002000000020fa78
- (void)pxg_addToScrollViewController:(id)arg1;	// IMP=0x002000000020f9e3
- (void)px_setAnchorPoint:(struct CGPoint)arg1;	// IMP=0x00200000007957f8
@property(readonly, nonatomic) _Bool px_supportsAlphaBlending;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

