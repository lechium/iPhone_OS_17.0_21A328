//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccount/AARequest.h>

@class ACAccount, ICQInlineTip, NSString;

@interface INTipNetworkRequest : AARequest
{
    ACAccount *_account;	// 8 = 0x8
    ICQInlineTip *_tip;	// 16 = 0x10
    NSString *_tipStatus;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000094b5
@property(readonly, nonatomic) NSString *tipStatus; // @synthesize tipStatus=_tipStatus;
- (id)urlRequest;	// IMP=0x0010000000009214
- (id)_bodyParameters;	// IMP=0x0010000000009148
- (id)urlString;	// IMP=0x0010000000009025
- (id)initWithAccountForDisplayStatus:(id)arg1 tip:(id)arg2;	// IMP=0x0010000000008fe4
- (id)initWithAccountForDismissStatus:(id)arg1 tip:(id)arg2;	// IMP=0x0010000000008fa3
- (id)initWithAccount:(id)arg1 tip:(id)arg2;	// IMP=0x0010000000008f01

@end

