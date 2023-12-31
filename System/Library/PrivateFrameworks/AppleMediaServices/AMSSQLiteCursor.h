//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSSQLiteStatement, NSDictionary;

__attribute__((visibility("hidden")))
@interface AMSSQLiteCursor : NSObject
{
    NSDictionary *_columnIndexByName;	// 8 = 0x8
    struct sqlite3_stmt *_statement;	// 16 = 0x10
    AMSSQLiteStatement *_statementWrapper;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003917a6
- (int)_columnTypeForColumnIndex:(int)arg1;	// IMP=0x0000000000391796
- (int)columnIndexForColumnName:(id)arg1;	// IMP=0x00000000003916ee
- (id)URLForColumnName:(id)arg1;	// IMP=0x00000000003916a8
- (id)URLForColumnIndex:(int)arg1;	// IMP=0x0000000000391648
- (id)stringForColumnName:(id)arg1;	// IMP=0x0000000000391602
- (id)stringForColumnIndex:(int)arg1;	// IMP=0x00000000003915a7
@property(readonly, nonatomic) long long numberOfColumns;
- (id)numberForColumnName:(id)arg1;	// IMP=0x0000000000391550
- (id)numberForColumnIndex:(int)arg1;	// IMP=0x00000000003914bd
- (long long)int64ForColumnName:(id)arg1;	// IMP=0x0000000000391489
- (long long)int64ForColumnIndex:(int)arg1;	// IMP=0x0000000000391479
- (int)intForColumnName:(id)arg1;	// IMP=0x0000000000391445
- (int)intForColumnIndex:(int)arg1;	// IMP=0x0000000000391435
- (double)doubleForColumnName:(id)arg1;	// IMP=0x0000000000391400
- (double)doubleForColumnIndex:(int)arg1;	// IMP=0x00000000003913f0
- (id)dateForColumnName:(id)arg1;	// IMP=0x00000000003913aa
- (id)dateForColumnIndex:(int)arg1;	// IMP=0x000000000039132d
- (id)dataForColumnName:(id)arg1;	// IMP=0x00000000003912e7
- (id)dataForColumnIndex:(int)arg1;	// IMP=0x0000000000391277
- (id)initWithStatement:(id)arg1;	// IMP=0x00000000003911f8

@end

