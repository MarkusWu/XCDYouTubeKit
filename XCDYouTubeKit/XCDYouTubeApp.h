//
//  XCDYouTubeApp.h
//  PositiveQuote
//
//  Created by Markus Wu on 6/28/18.
//  Copyright © 2018 Markus Wu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface XCDYouTubeApp : NSObject

+ (instancetype)shared;

- (void)fixInlinePlayerFullScreenButtonBug;

@end
