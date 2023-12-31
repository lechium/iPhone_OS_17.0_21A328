//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIJSObject.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VUIJSAMSBagInterface : VUIJSObject
{
}

+ (id)convertNSErrorIntoDict:(id)arg1;	// IMP=0x001000000011f2a2
+ (id)generateResponseDictionary:(id)arg1 withError:(id)arg2;	// IMP=0x001000000011f19b
- (void)dictionaryForKeyWithCompletion:(id)arg1:(id)arg2;	// IMP=0x000000000011ed80
- (void)URLForKeyWithCompletion:(id)arg1:(id)arg2;	// IMP=0x000000000011e945
- (void)stringForKeyWithCompletion:(id)arg1:(id)arg2;	// IMP=0x000000000011e52a
- (void)integerForKeyWithCompletion:(id)arg1:(id)arg2;	// IMP=0x000000000011e10f
- (void)doubleForKeyWithCompletion:(id)arg1:(id)arg2;	// IMP=0x000000000011dcf4
- (void)boolForKeyWithCompletion:(id)arg1:(id)arg2;	// IMP=0x000000000011d8d9
- (void)arrayForKeyWithCompletion:(id)arg1:(id)arg2;	// IMP=0x000000000011d4be
- (id)dictionaryForKey:(id)arg1;	// IMP=0x000000000011d3d1
- (id)URLForKey:(id)arg1;	// IMP=0x000000000011d2b2
- (id)stringForKey:(id)arg1;	// IMP=0x000000000011d1c5
- (id)integerForKey:(id)arg1;	// IMP=0x000000000011d0d8
- (id)doubleForKey:(id)arg1;	// IMP=0x000000000011cfeb
- (id)boolForKey:(id)arg1;	// IMP=0x000000000011cefe
- (id)arrayForKey:(id)arg1;	// IMP=0x000000000011ce11
@property(readonly, nonatomic) NSDictionary *VUIAMSBagValueTypes;

@end

