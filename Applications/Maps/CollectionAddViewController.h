//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CollectionSaveSession;

@interface CollectionAddViewController
{
    CollectionSaveSession *_editSession;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000007a1497
@property(retain, nonatomic) CollectionSaveSession *editSession; // @synthesize editSession=_editSession;
- (void)saveMapItem:(id)arg1;	// IMP=0x00100000007a1064
- (_Bool)searchDataSource:(id)arg1 shouldFilterItem:(id)arg2;	// IMP=0x00100000007a0ec8
- (int)requestSource;	// IMP=0x00100000007a0ebd
- (id)headerTitle;	// IMP=0x00100000007a0e55

@end
