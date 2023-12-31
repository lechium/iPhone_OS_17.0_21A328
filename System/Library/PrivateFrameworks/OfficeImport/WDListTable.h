//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, WDDocument, WDList;

__attribute__((visibility("hidden")))
@interface WDListTable : NSObject
{
    WDDocument *mDocument;	// 8 = 0x8
    NSMutableArray *mLists;	// 16 = 0x10
    NSMutableDictionary *mListMapById;	// 24 = 0x18
    WDList *mNullList;	// 32 = 0x20
    WDList *mDefaultList;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000003f4554
- (id)description;	// IMP=0x00000000003f4516
- (id)initWithDocument:(id)arg1;	// IMP=0x00000000000c30ac
- (id)listWithListId:(int)arg1;	// IMP=0x00000000003f4477
- (id)addListWithListId:(int)arg1 listDefinitionId:(int)arg2;	// IMP=0x00000000003f4364
- (id)listAt:(unsigned long long)arg1;	// IMP=0x00000000000f5461
- (unsigned long long)listCount;	// IMP=0x00000000000f544b
- (id)lists;	// IMP=0x00000000003f4356

@end

