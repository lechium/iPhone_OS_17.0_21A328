//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKIssuerBindingData;

@interface PDRequestPassesTask
{
    PKIssuerBindingData *_issuerBindingData;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000002e3976
+ (id);	// IMP=0x00100000002e3890
- (void).cxx_destruct;	// IMP=0x00200000002e4484
@property(readonly, nonatomic) PKIssuerBindingData *issuerBindingData; // @synthesize issuerBindingData=_issuerBindingData;
- (id)description;	// IMP=0x00100000002e439d
- (void)handleError:(id)arg1;	// IMP=0x00100000002e436f
- (id)_resultFromResponseData:(id)arg1 multiplePasses:(_Bool)arg2;	// IMP=0x00100000002e3fd5
- (_Bool)_matchesRequestPassesTask:(id)arg1;	// IMP=0x00100000002e3ea2
- (long long)actionForActiveTask:(id)arg1;	// IMP=0x00100000002e3e88
- (long long)actionForInactiveTask:(id)arg1;	// IMP=0x00100000002e3e6f
- (_Bool)coalescesWithTaskSubclass:(Class)arg1;	// IMP=0x00100000002e3e41
- (void)handleResponse:(id)arg1 data:(id)arg2;	// IMP=0x00100000002e3c41
- (id)bodyDictionary;	// IMP=0x00100000002e3b32
- (_Bool)backoffComplete;	// IMP=0x00100000002e3b2a
- (id)queryFields;	// IMP=0x00100000002e3ab8
- (id)method;	// IMP=0x00100000002e3aab
- (_Bool)isValid;	// IMP=0x00100000002e3a96
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002e3a19
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002e397e
- (id)_initTaskWithWebService:(id)arg1 issuerBindingData:(id)arg2;	// IMP=0x00100000002e38fe

@end

