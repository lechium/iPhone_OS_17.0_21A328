//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface FACancelInvitationOperation
{
    NSString *_email;	// 8 = 0x8
    NSString *_familyID;	// 16 = 0x10
    CDUnknownBlockType _cancelInvitationCompletionHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000118bf
@property(copy) CDUnknownBlockType cancelInvitationCompletionHandler; // @synthesize cancelInvitationCompletionHandler=_cancelInvitationCompletionHandler;
@property(readonly, copy) NSString *familyID; // @synthesize familyID=_familyID;
@property(readonly, copy) NSString *email; // @synthesize email=_email;
- (id)cancelInvitation;	// IMP=0x001000000001166f
- (id)initWithNetworkService:(id)arg1 email:(id)arg2 familyID:(id)arg3;	// IMP=0x00100000000115c7

@end
