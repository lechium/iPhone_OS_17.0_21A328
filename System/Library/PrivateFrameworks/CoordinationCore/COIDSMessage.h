//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSError, NSString;

__attribute__((visibility("hidden")))
@interface COIDSMessage : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    unsigned long long _version;	// 16 = 0x10
    NSString *_command;	// 24 = 0x18
    NSData *_payload;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSDictionary *_metadata;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000007d007
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) NSString *command; // @synthesize command=_command;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)_commandPayload:(id)arg1;	// IMP=0x000000000007ce4b
- (id)unarchivePayloadOfTypes:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007cc1d
- (id)initWithResponse:(id)arg1;	// IMP=0x000000000007cba8
- (id)initWithRequest:(id)arg1;	// IMP=0x000000000007cb30
- (id)initWithError:(id)arg1;	// IMP=0x000000000007cab5
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007c96f
- (_Bool)validateMetadata:(inout id *)arg1 error:(out id *)arg2;	// IMP=0x000000000007c914
- (_Bool)validateError:(inout id *)arg1 error:(out id *)arg2;	// IMP=0x000000000007c517
- (_Bool)validateData:(inout id *)arg1 error:(out id *)arg2;	// IMP=0x000000000007c3e2
- (_Bool)validateCommand:(inout id *)arg1 error:(out id *)arg2;	// IMP=0x000000000007c387
- (_Bool)validateType:(inout id *)arg1 error:(out id *)arg2;	// IMP=0x000000000007c0e9
- (_Bool)validateVersion:(inout id *)arg1 error:(out id *)arg2;	// IMP=0x000000000007bf6d
- (_Bool)checkValue:(id)arg1 forKey:(id)arg2 isKindOfClass:(Class)arg3 error:(out id *)arg4;	// IMP=0x000000000007bddc
- (id)dictionaryRepresentation;	// IMP=0x000000000007b9d3

@end

