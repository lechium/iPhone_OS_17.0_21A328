//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface LPURLSuffixChecker : NSObject
{
    struct {
        unsigned short _field1[27];
    } *_trie;	// 8 = 0x8
    unsigned int _trieNodeCount;	// 16 = 0x10
    unsigned long long _maxLength;	// 24 = 0x18
    NSMutableArray *_failedSuffixes;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003ac4d
- (void)dealloc;	// IMP=0x000000000003ac13
- (_Bool)hasSuffix:(id)arg1 remainingPrefix:(id *)arg2;	// IMP=0x000000000003a8ad
- (_Bool)hasSuffix:(id)arg1;	// IMP=0x000000000003a899
- (id)initWithSuffixes:(id)arg1;	// IMP=0x000000000003a60d
- (void)addStringToFailedSuffixes:(id)arg1;	// IMP=0x000000000003a559
- (_Bool)insertString:(id)arg1 intoTrieWithCache:(CDStruct_f2b84ca7 *)arg2;	// IMP=0x000000000003a2f0

@end
