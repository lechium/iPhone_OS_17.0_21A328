//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOURLCollectionStorage;

@interface ShowCollectionAction
{
    GEOURLCollectionStorage *_collectionStorage;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000cd2595
@property(retain, nonatomic) GEOURLCollectionStorage *collectionStorage; // @synthesize collectionStorage=_collectionStorage;
- (int)analyticsLaunchActionType;	// IMP=0x0010000000cd2565
- (_Bool)isCompatibleWithRestorationTask;	// IMP=0x0010000000cd255d
- (_Bool)isCompatibleWithNavigation;	// IMP=0x0010000000cd2555
- (id)initWithCollectionStorage:(id)arg1;	// IMP=0x0010000000cd24e7

@end

