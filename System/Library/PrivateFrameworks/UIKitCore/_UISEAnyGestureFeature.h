//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UISEAnyGestureFeature
{
    NSArray *_subfeatures;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000092449e
@property(readonly, nonatomic) NSArray *subfeatures; // @synthesize subfeatures=_subfeatures;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample *)arg1;	// IMP=0x0000000000924308
- (id)debugDictionary;	// IMP=0x00000000009240e4
- (void)featureDidChangeState:(id)arg1;	// IMP=0x00000000009240b0
- (id)initWithSubfeatures:(id)arg1;	// IMP=0x0000000000923f3a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
