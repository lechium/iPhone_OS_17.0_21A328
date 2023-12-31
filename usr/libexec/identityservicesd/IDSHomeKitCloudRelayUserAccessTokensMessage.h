//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSArray, NSString;

@interface IDSHomeKitCloudRelayUserAccessTokensMessage : FTIDSMessage
{
    NSString *_serviceUserID;	// 232 = 0xe8
    NSString *_userID;	// 240 = 0xf0
    NSString *_userHandle;	// 248 = 0xf8
    NSArray *_accessoryRequests;	// 256 = 0x100
    NSArray *_responseAccessTokens;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x00200000000425ae
@property(copy) NSArray *responseAccessTokens; // @synthesize responseAccessTokens=_responseAccessTokens;
@property(copy) NSArray *accessoryRequests; // @synthesize accessoryRequests=_accessoryRequests;
@property(copy) NSString *userHandle; // @synthesize userHandle=_userHandle;
@property(copy) NSString *userID; // @synthesize userID=_userID;
@property(copy) NSString *serviceUserID; // @synthesize serviceUserID=_serviceUserID;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x0010000000042497
- (id)bagKey;	// IMP=0x001000000004248a
- (id)messageBody;	// IMP=0x0010000000042368
- (id)additionalMessageHeaders;	// IMP=0x0010000000042230
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000420c7

@end

