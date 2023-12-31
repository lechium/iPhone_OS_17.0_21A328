//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKBPhoneToCarPlayTransformation : NSObject
{
}

+ (id)cachedKeysForTransformationContext:(id)arg1;	// IMP=0x0010000000f09830
+ (id)transformKeyplane:(id)arg1 withTransformationContext:(id)arg2;	// IMP=0x0010000000f0971e
+ (id)transform10KeyKeyplane:(id)arg1 withTransformationContext:(id)arg2;	// IMP=0x0010000000f0916b
+ (id)transformQWERTYKeyplane:(id)arg1 withTransformationContext:(id)arg2;	// IMP=0x0010000000f079de
+ (void)removeAddedKeysFromKeyplane:(id)arg1;	// IMP=0x0010000000f07862
+ (id)fillFrame:(struct CGRect)arg1 withEmptyKeyNamed:(id)arg2 inKeyplane:(id)arg3 withTransformationContext:(id)arg4;	// IMP=0x0010000000f075ed
+ (unsigned long long)columnBySwappingForLeftHandDriveIfNeeded:(unsigned long long)arg1;	// IMP=0x0010000000f075ae
+ (id)cachedKeys;	// IMP=0x0010000000f07561
+ (id)transformationIdentifier;	// IMP=0x0010000000f07554

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

