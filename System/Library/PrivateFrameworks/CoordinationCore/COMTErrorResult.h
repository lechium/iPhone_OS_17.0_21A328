//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError;

__attribute__((visibility("hidden")))
@interface COMTErrorResult
{
    NSError *_error;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000010d2a
- (void).cxx_destruct;	// IMP=0x0000000000010d4e
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000010d32
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000010c8f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000010bf4
- (id)initWithError:(id)arg1 actionIdentifier:(id)arg2;	// IMP=0x0000000000010b7c

@end
