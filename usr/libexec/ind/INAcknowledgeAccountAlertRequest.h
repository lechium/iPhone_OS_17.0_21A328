//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccount/AARequest.h>

@class ACAccount, ACAccountStore, NSData, NSDictionary;

@interface INAcknowledgeAccountAlertRequest : AARequest
{
    ACAccount *_account;	// 8 = 0x8
    ACAccountStore *_accountStore;	// 16 = 0x10
    NSDictionary *_pushMessageInfo;	// 24 = 0x18
    NSData *_pushToken;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000b5d3
@property(copy, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(copy, nonatomic) NSDictionary *pushMessageInfo; // @synthesize pushMessageInfo=_pushMessageInfo;
- (id)urlRequest;	// IMP=0x001000000000b2f8
- (id)urlString;	// IMP=0x001000000000b2a1
- (id)initWithAccount:(id)arg1 store:(id)arg2;	// IMP=0x001000000000b1ff

@end
