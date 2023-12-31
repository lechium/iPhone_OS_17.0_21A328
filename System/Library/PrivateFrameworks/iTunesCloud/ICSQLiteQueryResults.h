//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICSQLiteStatement, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface ICSQLiteQueryResults : NSObject
{
    ICSQLiteStatement *_statement;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000164ccb
- (int)clearBindings;	// IMP=0x0000000000164cb5
- (void)bindStringCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x0000000000164c9f
- (void)bindString:(id)arg1 atPosition:(int)arg2;	// IMP=0x0000000000164c89
- (void)bindDataCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x0000000000164c73
- (void)bindData:(id)arg1 atPosition:(int)arg2;	// IMP=0x0000000000164c5d
- (void)bindNumber:(id)arg1 atPosition:(int)arg2;	// IMP=0x0000000000164c47
- (void)bindNullAtPosition:(int)arg1;	// IMP=0x0000000000164c31
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;	// IMP=0x0000000000164c1b
- (void)bindInt:(int)arg1 atPosition:(int)arg2;	// IMP=0x0000000000164c05
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;	// IMP=0x0000000000164bef
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;	// IMP=0x0000000000164bd9
@property(readonly, copy, nonatomic) NSString *firstStringValue;
@property(readonly, copy, nonatomic) NSNumber *firstNumberValue;
@property(readonly, nonatomic) long long firstInt64Value;
- (void)enumerateRowsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000016472a
- (id)initWithStatement:(id)arg1;	// IMP=0x00000000001646bf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

