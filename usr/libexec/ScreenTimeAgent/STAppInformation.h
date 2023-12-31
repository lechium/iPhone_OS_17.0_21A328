//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface STAppInformation : NSObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSString *_displayName;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000754b
- (void).cxx_destruct;	// IMP=0x002000000000777d
@property(readonly, copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (unsigned long long)hash;	// IMP=0x0010000000007711
- (_Bool)isEqualToAppInformation:(id)arg1;	// IMP=0x0010000000007603
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000075a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000007553
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000749d
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000073db
- (id)description;	// IMP=0x0010000000007331
- (id)initWithBundleIdentifier:(id)arg1 displayName:(id)arg2;	// IMP=0x001000000000727a

@end

