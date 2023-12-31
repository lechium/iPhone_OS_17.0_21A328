//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, NSData, NSDictionary, NSError, NSMutableDictionary, NSString;
@protocol NSSecureCoding;

__attribute__((visibility("hidden")))
@interface ACRemoteDeviceMessage : NSObject
{
    NSMutableDictionary *_payload;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    _Bool _needsReply;	// 24 = 0x18
    _Bool _isReply;	// 25 = 0x19
    NSString *_identifier;	// 32 = 0x20
}

+ (id)_whitelistedClasses;	// IMP=0x0060000000044059
+ (id)actionMessageWithCommand:(id)arg1 account:(id)arg2 options:(id)arg3;	// IMP=0x00600000000449cb
+ (id)replyForMessage:(id)arg1 withSuccess:(_Bool)arg2 error:(id)arg3;	// IMP=0x0060000000044dda
+ (id)replyForMessage:(id)arg1 withSuccess:(_Bool)arg2 result:(id)arg3 error:(id)arg4;	// IMP=0x0060000000044c36
- (void).cxx_destruct;	// IMP=0x0000000000044998
@property(nonatomic) _Bool isReply; // @synthesize isReply=_isReply;
@property(nonatomic) _Bool needsReply; // @synthesize needsReply=_needsReply;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x000000000004473f
@property(readonly, nonatomic) NSData *data;
- (void)_invalidateCachedData;	// IMP=0x00000000000445e2
- (id)_payloadObjectForKey:(id)arg1;	// IMP=0x0000000000044594
- (void)_setPayloadObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000044502
- (id)initWithData:(id)arg1;	// IMP=0x000000000004425b
- (id)init;	// IMP=0x00000000000441c7
@property(readonly, nonatomic) NSDictionary *options;
@property(readonly, nonatomic) ACAccount *account;
@property(readonly, nonatomic) NSString *command;
@property(readonly, nonatomic) NSObject<NSSecureCoding> *result;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) _Bool success;
@property(readonly, nonatomic) NSString *sentMessageIdentifier;

@end

