//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MADAutoSetPolicy, NSString;

__attribute__((visibility("hidden")))
@interface MADAutoSetSchedulerTriggered : NSObject
{
    NSString *_clientDomainName;	// 8 = 0x8
    NSString *_assetSetIdentifier;	// 16 = 0x10
    MADAutoSetPolicy *_schedulerPolicy;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000194892
- (void).cxx_destruct;	// IMP=0x0000000000194a79
@property(retain, nonatomic) MADAutoSetPolicy *schedulerPolicy; // @synthesize schedulerPolicy=_schedulerPolicy;
@property(readonly, retain, nonatomic) NSString *assetSetIdentifier; // @synthesize assetSetIdentifier=_assetSetIdentifier;
@property(readonly, retain, nonatomic) NSString *clientDomainName; // @synthesize clientDomainName=_clientDomainName;
- (id)summary;	// IMP=0x000000000019497b
- (id)description;	// IMP=0x0000000000194969
- (id)copy;	// IMP=0x000000000019489a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001947af
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000019469f
- (id)initForClientDomainName:(id)arg1 forAssetSetIdentifier:(id)arg2 withSchedulerPolicy:(id)arg3;	// IMP=0x00000000001945e7

@end
