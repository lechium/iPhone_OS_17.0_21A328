//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ARKit/ARFrame.h>

@class MISSING_TYPE;

@interface ARFrame (ARFrame_SmartHitTest)
- (id)smartHitTestResultForImagePoint:(float)arg1 assetPosition:maxDistance: /* Error: Ran out of types for this method. */;	// IMP=0x0030000000003ba1
- (float)hitTestResultDistanceFromCamera:(id)arg1;	// IMP=0x0030000000003b46
- (_Bool)hitTestResult:(id)arg1 isPlaneOfType:(unsigned long long)arg2;	// IMP=0x0030000000003ab5
@property(readonly, nonatomic) MISSING_TYPE *cameraPosition;
- (id)hitTestOnPlaneWithWorldTransform:(CDStruct_f1db2b5e)arg1 forImagePoint:(float)arg2 maxDistance: /* Error: Ran out of types for this method. */;	// IMP=0x003000000000fd45
- (MISSING_TYPE *)normalizedImagePointForScreenPoint:(struct CGSize)arg1 viewportSize:(long long)arg2 orientation: /* Error: Ran out of types for this method. */;	// IMP=0x0030000000020ec7
@end
