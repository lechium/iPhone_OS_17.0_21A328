//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UnfairLock;

@interface ThreadSafeDictionary : NSObject
{
    NSMutableDictionary *_dictionary;	// 8 = 0x8
    UnfairLock *_lock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000008b6a2
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x001000000008b5c0
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000008b4de
- (id)optionalForKey:(id)arg1;	// IMP=0x001000000008b325
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x001000000008b1cd
- (id)objectForKey:(id)arg1;	// IMP=0x001000000008b050
- (id)init;	// IMP=0x001000000008afdb

@end
