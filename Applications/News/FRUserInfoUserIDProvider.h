//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCUserInfo, NSString;

@interface FRUserInfoUserIDProvider : NSObject
{
    FCUserInfo *_userInfo;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000090072
@property(readonly, copy, nonatomic) FCUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) NSString *userID;
- (id)initWithUserInfo:(id)arg1;	// IMP=0x001000000008ff8c
- (id)init;	// IMP=0x001000000008fe47

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

