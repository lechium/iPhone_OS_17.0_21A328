//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HomeCellModel-Protocol.h"
#import "MapsUIDiffableDataSourceIdentifiable-Protocol.h"
#import "MapsUIDiffableDataSourceViewModel-Protocol.h"

@class MapsSuggestionsEntry, NSString;

@protocol HomeListSuggestionCellModel <MapsUIDiffableDataSourceViewModel, MapsUIDiffableDataSourceIdentifiable, HomeCellModel>
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) MapsSuggestionsEntry *entry;
@end

