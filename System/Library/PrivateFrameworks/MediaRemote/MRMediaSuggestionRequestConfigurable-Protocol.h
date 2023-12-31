//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/NSObject-Protocol.h>

@class NSUUID;

@protocol MRMediaSuggestionRequestConfigurable <NSObject>
@property(nonatomic) _Bool useDirectAccess;
@property(copy, nonatomic) NSUUID *requestIdentifier;
@property(nonatomic) _Bool includeArtwork;
@property(nonatomic) unsigned long long maxResults;
@end

