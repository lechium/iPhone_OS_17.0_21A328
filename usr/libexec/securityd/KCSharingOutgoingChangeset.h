//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KCSharingOutgoingChangesetCursor, NSArray;

@interface KCSharingOutgoingChangeset : NSObject
{
    NSArray *_recordsToSave;	// 8 = 0x8
    NSArray *_recordIDsToDelete;	// 16 = 0x10
    KCSharingOutgoingChangesetCursor *_cursor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000019db2e
@property(readonly, nonatomic) KCSharingOutgoingChangesetCursor *cursor; // @synthesize cursor=_cursor;
@property(readonly, nonatomic) NSArray *recordIDsToDelete; // @synthesize recordIDsToDelete=_recordIDsToDelete;
@property(readonly, nonatomic) NSArray *recordsToSave; // @synthesize recordsToSave=_recordsToSave;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id)initWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 cursor:(id)arg3;	// IMP=0x001000000019d9f1

@end

