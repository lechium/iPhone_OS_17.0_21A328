//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@protocol CollectionHandlerInfo;

@protocol CollectionHandlerCell <NSObject>
@property(nonatomic, getter=showsCheckmark) _Bool showCheckmark;
@property(nonatomic) _Bool disabled;
@property(nonatomic) unsigned long long collectionViewSize;
@property(retain, nonatomic) id <CollectionHandlerInfo> collectionInfo;
@end

