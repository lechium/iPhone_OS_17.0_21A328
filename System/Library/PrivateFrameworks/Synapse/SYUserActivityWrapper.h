//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUserActivity;

__attribute__((visibility("hidden")))
@interface SYUserActivityWrapper : NSObject
{
    NSUserActivity *_userActivity;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000003931f
- (void).cxx_destruct;	// IMP=0x00000000000394e3
@property(readonly, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000393fe
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000039327
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000039314
- (id)initWithUserActivity:(id)arg1;	// IMP=0x00000000000392a9

@end

