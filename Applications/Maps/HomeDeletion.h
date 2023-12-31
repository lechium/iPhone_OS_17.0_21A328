//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IdentifierPath, NSError, NSIndexPath;

@interface HomeDeletion : NSObject
{
    _Bool _tentativelyDeleted;	// 8 = 0x8
    _Bool _completed;	// 9 = 0x9
    _Bool _success;	// 10 = 0xa
    id _object;	// 16 = 0x10
    NSIndexPath *_indexPath;	// 24 = 0x18
    IdentifierPath *_identifierPath;	// 32 = 0x20
    CDUnknownBlockType _contextualActionCompletionHandler;	// 40 = 0x28
    NSError *_error;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000c17d1a
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly, nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(readonly, nonatomic) _Bool tentativelyDeleted; // @synthesize tentativelyDeleted=_tentativelyDeleted;
@property(readonly, nonatomic) CDUnknownBlockType contextualActionCompletionHandler; // @synthesize contextualActionCompletionHandler=_contextualActionCompletionHandler;
@property(readonly, nonatomic) IdentifierPath *identifierPath; // @synthesize identifierPath=_identifierPath;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
- (id)description;	// IMP=0x0010000000c17b8f
- (void)markAsCompletedWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x0010000000c17b3a
- (void)markAsTentativelyDeleted;	// IMP=0x0010000000c17b24
- (id)initWithObject:(id)arg1 indexPath:(id)arg2 identifierPath:(id)arg3 contextualActionCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000c17a37

@end

