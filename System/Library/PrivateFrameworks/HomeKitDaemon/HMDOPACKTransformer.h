//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HMDOPACKTransformer
{
}

+ (id)valueFromOPACK:(id)arg1 error:(id *)arg2;	// IMP=0x00800000007abea5
+ (id)OPACKFromValue:(id)arg1 error:(id *)arg2;	// IMP=0x00800000007abdf1
+ (id)reverseTransformedValue:(id)arg1 error:(id *)arg2;	// IMP=0x00800000007abd2a
+ (id)transformedValue:(id)arg1 error:(id *)arg2;	// IMP=0x00800000007abc3e
+ (_Bool)isStructuredDataCompatible;	// IMP=0x00800000007abc36
+ (Class)valueClass;	// IMP=0x00800000007abb8e
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00800000007abb23
- (id)valueFromOPACK:(id)arg1 error:(id *)arg2;	// IMP=0x00000000007ab946
- (id)OPACKFromValue:(id)arg1 error:(id *)arg2;	// IMP=0x00000000007ab83e

@end

