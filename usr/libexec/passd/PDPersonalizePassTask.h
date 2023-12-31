//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PDPassUpdateContext, PKContact;

@interface PDPersonalizePassTask
{
    PDPassUpdateContext *_context;	// 16 = 0x10
    PKContact *_contact;	// 24 = 0x18
    NSString *_personalizationToken;	// 32 = 0x20
    unsigned long long _requiredPersonalizationFields;	// 40 = 0x28
    unsigned long long _personalizationSource;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000002e2062
+ (id)taskWithWebService:(id)arg1 updateContext:(id)arg2 contact:(id)arg3 personalizationToken:(id)arg4 requiredPersonalizationFields:(unsigned long long)arg5 personalizationSource:(unsigned long long)arg6;	// IMP=0x00100000002e1ea5
- (void).cxx_destruct;	// IMP=0x00200000002e37b7
@property(readonly, nonatomic) unsigned long long personalizationSource; // @synthesize personalizationSource=_personalizationSource;
@property(readonly, nonatomic) unsigned long long requiredPersonalizationFields; // @synthesize requiredPersonalizationFields=_requiredPersonalizationFields;
@property(readonly, nonatomic) NSString *personalizationToken; // @synthesize personalizationToken=_personalizationToken;
@property(readonly, nonatomic) PKContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) PDPassUpdateContext *context; // @synthesize context=_context;
- (id)_resultFromResponseData:(id)arg1;	// IMP=0x00100000002e354b
- (_Bool)_matchesRegistrationTask:(id)arg1;	// IMP=0x00100000002e3396
- (_Bool)_matchesGetPassTask:(id)arg1;	// IMP=0x00100000002e31e1
- (_Bool)_matchesPersonalizePassTask:(id)arg1;	// IMP=0x00100000002e302c
- (long long)actionForActiveTask:(id)arg1;	// IMP=0x00100000002e2f52
- (long long)actionForInactiveTask:(id)arg1;	// IMP=0x00100000002e2e71
- (_Bool)coalescesWithTaskSubclass:(Class)arg1;	// IMP=0x00100000002e2dfc
- (id)description;	// IMP=0x00100000002e2ccb
- (void)handleError:(id)arg1;	// IMP=0x00100000002e2c9d
- (void)handleResponse:(id)arg1 data:(id)arg2;	// IMP=0x00100000002e2b01
- (id)headerFields;	// IMP=0x00100000002e29bf
- (id)bodyDictionary;	// IMP=0x00100000002e25d1
- (_Bool)backoffComplete;	// IMP=0x00100000002e25c9
- (id)endpointComponents;	// IMP=0x00100000002e24dc
- (id)method;	// IMP=0x00100000002e24cf
- (_Bool)pertainsToPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;	// IMP=0x00100000002e2400
@property(readonly, nonatomic) NSString *serialNumber;
- (_Bool)isValid;	// IMP=0x00100000002e22c6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002e21cf
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002e206a
- (id)initWithWebService:(id)arg1 updateContext:(id)arg2 contact:(id)arg3 personalizationToken:(id)arg4 requiredPersonalizationFields:(unsigned long long)arg5 personalizationSource:(unsigned long long)arg6;	// IMP=0x00100000002e1f5d

@end

