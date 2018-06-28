//
//  XCDYouTubeApp.m
//  PositiveQuote
//
//  Created by Markus Wu on 6/28/18.
//  Copyright © 2018 Markus Wu. All rights reserved.
//

#import "XCDYouTubeApp.h"

extern void WorkaroundInlinePlayerFullScreenButtonBug(void);

@implementation XCDYouTubeApp

+ (instancetype)shared {
    static XCDYouTubeApp *instance;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[XCDYouTubeApp alloc] init];
    });
    return instance;
}

/**
 Fix a fullscreen button icon bug for iOS >= 10 in MPMoviePlayerController.
 */
- (void)fixInlinePlayerFullScreenButtonBug {
    WorkaroundInlinePlayerFullScreenButtonBug();
}

@end
