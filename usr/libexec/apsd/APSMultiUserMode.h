//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface APSMultiUserMode : NSObject
{
    _Bool _isMultiUser;	// 8 = 0x8
    _Bool _isLoggedInUser;	// 9 = 0x9
}

+ (_Bool)_getIsCurrentlyLoggedIn;	// IMP=0x004000000000876e
+ (_Bool)_getMultiUserMode;	// IMP=0x0010000000008714
+ (id)sharedInstance;	// IMP=0x001000000000862e
- (_Bool)isLoggedInUser;	// IMP=0x002000000000885c
@property(readonly, nonatomic) _Bool isMultiUser; // @synthesize isMultiUser=_isMultiUser;
- (_Bool)isMultiAndLoggedIn;	// IMP=0x001000000000883c
- (id)initWithIsMultiUserMode:(_Bool)arg1 loggedInUser:(_Bool)arg2;	// IMP=0x00100000000087f6

@end
