//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MSVSQLDatabaseFunctionContext : NSObject
{
    struct sqlite3_context *_context;	// 8 = 0x8
    int _argc;	// 16 = 0x10
    struct sqlite3_value **_argv;	// 24 = 0x18
}

- (id)returnError:(id)arg1 sqliteCode:(int)arg2;	// IMP=0x0000000000038abc
- (id)returnError:(id)arg1;	// IMP=0x0000000000038aa5
- (id)returnErrorNoMemory;	// IMP=0x0000000000038a89
- (id)returnErrorTooBig;	// IMP=0x0000000000038a6d
- (id)returnFunctionContext:(id)arg1;	// IMP=0x0000000000038a00
- (id)returnJSON:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000038843
- (id)returnDate:(id)arg1;	// IMP=0x0000000000038812
- (id)returnFloat:(float)arg1;	// IMP=0x00000000000387fc
- (id)returnUInt64:(unsigned long long)arg1;	// IMP=0x00000000000387ea
- (id)returnBool:(_Bool)arg1;	// IMP=0x00000000000387cc
- (id)returnData:(id)arg1;	// IMP=0x0000000000038749
- (id)returnString:(id)arg1;	// IMP=0x00000000000386c6
- (id)returnDouble:(double)arg1;	// IMP=0x00000000000386aa
- (id)returnInt64:(long long)arg1;	// IMP=0x000000000003868b
- (id)returnNull;	// IMP=0x000000000003866f
- (id)memoizedObjectForArgumentIndex:(long long)arg1;	// IMP=0x000000000003865f
- (void)memoizeObject:(id)arg1 forArgumentIndex:(long long)arg2;	// IMP=0x0000000000038584
- (id)functionContextOfClass:(Class)arg1 atArgumentIndex:(long long)arg2;	// IMP=0x0000000000038550
- (id)objectValueAtArgumentIndex:(long long)arg1;	// IMP=0x000000000003845c
- (id)jsonDataAtArgumentIndex:(long long)arg1;	// IMP=0x00000000000383dd
- (id)jsonValueAtArgumentIndex:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000000038375
- (id)dateValueAtArgumentIndex:(long long)arg1;	// IMP=0x0000000000038297
- (float)floatValueAtArgumentIndex:(long long)arg1;	// IMP=0x0000000000038278
- (unsigned long long)uint64ValueAtArgumentIndex:(long long)arg1;	// IMP=0x000000000003825e
- (_Bool)boolValueAtArgumentIndex:(long long)arg1;	// IMP=0x000000000003823e
- (id)dataValueAtArgumentIndex:(long long)arg1;	// IMP=0x00000000000381ea
- (id)stringValueAtArgumentIndex:(long long)arg1;	// IMP=0x000000000003815e
- (double)doubleValueAtArgumentIndex:(long long)arg1;	// IMP=0x0000000000038144
- (long long)int64ValueAtArgumentIndex:(long long)arg1;	// IMP=0x000000000003812a
- (_Bool)isNullValueAtArgumentIndex:(long long)arg1;	// IMP=0x0000000000038109
@property(readonly, nonatomic) long long numberOfArguments;
- (struct sqlite3_value *)_valueAtIndex:(long long)arg1;	// IMP=0x0000000000038044

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

