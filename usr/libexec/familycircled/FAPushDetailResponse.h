//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccount/AAResponse.h>

@class NSData, NSDictionary, NSString;

@interface FAPushDetailResponse : AAResponse
{
    NSDictionary *_response;	// 32 = 0x20
    NSData *_data;	// 40 = 0x28
    NSString *_pushTopic;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000001ceae
@property(copy, nonatomic) NSString *pushTopic; // @synthesize pushTopic=_pushTopic;
- (id)initWithDictionary:(id)arg1;	// IMP=0x001000000001ce1e
- (_Bool)_booleanValueOfObject:(id)arg1;	// IMP=0x001000000001cdac
- (id)description;	// IMP=0x001000000001cd17
@property(readonly, nonatomic) NSString *otherButtonLabelText;
@property(readonly, nonatomic) NSString *actionButtonLableText;
@property(readonly, nonatomic) NSString *organizerEmail;
@property(readonly, nonatomic) NSString *childLastName;
@property(readonly, nonatomic) NSString *childFirstName;
@property(readonly, nonatomic) NSString *organizerLastName;
@property(readonly, nonatomic) NSString *organizerFirstName;
@property(readonly, nonatomic) NSString *inviteCode;
@property(readonly, nonatomic) NSString *message;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool showDetailsOption;
@property(readonly, nonatomic) _Bool showMessage;
@property(readonly, nonatomic, getter=isSuccess) _Bool success;
@property(readonly, nonatomic) NSDictionary *eventDetails;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;	// IMP=0x001000000001c8f9

@end

