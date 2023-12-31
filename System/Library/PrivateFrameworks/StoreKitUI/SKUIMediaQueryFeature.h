//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SKUIMediaQueryFeature : NSObject
{
    NSString *_featureName;	// 8 = 0x8
}

+ (_Bool)supportsFeatureName:(id)arg1;	// IMP=0x0060000000228782
- (void).cxx_destruct;	// IMP=0x00000000002287ac
@property(readonly, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property(readonly, nonatomic) NSArray *requiredKeys;
@property(readonly, nonatomic) NSArray *notificationNames;
- (_Bool)evaluateWithValues:(id)arg1;	// IMP=0x000000000022878a
- (id)initWithFeatureName:(id)arg1 value:(id)arg2;	// IMP=0x00000000002286cc

@end

