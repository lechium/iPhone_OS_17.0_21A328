//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (HealthKit)
- (id)_hk_valueForSafeValueForKeyPath:(id)arg1;	// IMP=0x007000000014fd56
- (id)hk_classNameWithTag:(id)arg1;	// IMP=0x007000000014fccd
- (_Bool)hk_expectMissingKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000014fc3f
- (id)hk_safeNumberIfExistsForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000014fbd6
- (id)hk_safeStringIfExistsForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000014fb6d
- (id)hk_safeDictionaryIfExistsForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000014fb04
- (id)hk_safeArrayIfExistsForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000014fa9b
- (id)hk_safeValueIfExistsForKeyPath:(id)arg1 class:(Class)arg2 error:(id *)arg3;	// IMP=0x007000000014fa14
- (id)hk_safeNumberForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000014f98b
- (id)hk_safeStringForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000014f902
- (id)hk_safeDictionaryForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000014f879
- (id)hk_safeArrayForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000014f7f0
- (id)hk_safeValueForKeyPath:(id)arg1 class:(Class)arg2 error:(id *)arg3;	// IMP=0x007000000014f767
- (_Bool)hk_hasValueForKeyPath:(id)arg1;	// IMP=0x007000000014f734
@end
